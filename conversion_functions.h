//
// Created by dimoje on 17.02.2026.
//

#ifndef GRAPHS_CONVERSION_FUNCTIONS_H
#define GRAPHS_CONVERSION_FUNCTIONS_H

#include <iostream>
#include <vector>
using namespace std;

extern vector<vector<int> > g_adjacency_matrix;
extern vector<vector<int> > g_incidence_matrix;
extern vector<vector<int> > g_adjacency_list;

extern int g_vertices;
extern int g_edges;

inline void list_to_adjacency_matrix() {
    if (g_adjacency_list.empty()) {
        cout << "\nFirst of all, enter adjacency list!\n\n";
        input_adjacency_list();
    }

    g_adjacency_matrix.clear();
    g_adjacency_matrix.resize(g_vertices, vector<int>(g_vertices, 0));

    for (int i = 0; i < g_vertices; i++) {
        for (int j = 0; j < g_adjacency_list[i].size(); j++) {
            int vertex = g_adjacency_list[i][j] - 1;
            g_adjacency_matrix[i][vertex] = 1;
        }
    }
}

inline void list_to_incidence_matrix() {
    if (g_adjacency_list.empty()) {
        cout << "\nFirst of all, enter adjacency list!\n\n";
        input_adjacency_list();
    }

    vector<pair<int, int> > edges;
    for (int i = 0; i < g_vertices; i++) {
        for (int j = 0; j < g_adjacency_list[i].size(); j++) {
            int to = g_adjacency_list[i][j];
            edges.push_back({(int) i, to});
        }
    }

    g_edges = edges.size();
    g_incidence_matrix.clear();
    g_incidence_matrix.resize(g_vertices, vector<int>(g_edges, 0));

    for (int edge_num = 0; edge_num < edges.size(); edge_num++) {
        int from = edges[edge_num].first;
        int to = edges[edge_num].second;

        if (from == to) {
            g_incidence_matrix[from][edge_num] = 2;
        } else {
            g_incidence_matrix[from][edge_num] = -1;
            g_incidence_matrix[to][edge_num] = 1;
        }
    }
}

inline void adjacency_matrix_to_list() {
    if (g_adjacency_matrix.empty()) {
        cout << "First of all, enter adjacency matrix:\n\n";
        input_adjacency_matrix();
    }

    g_adjacency_list.clear();
    g_adjacency_list.resize(g_vertices);

    for (int i = 0; i < g_vertices; i++) {
        for (int j = 0; j < g_vertices; j++) {
            if (g_adjacency_matrix[i][j] == 1) {
                g_adjacency_list[i].push_back(j + 1);
            }
        }
    }
}

inline void incidence_matrix_to_list() {
    if (g_incidence_matrix.empty()) {
        cout << "First of all, enter incidence matrix:\n\n";
        input_incidence_matrix();
    }

    g_adjacency_list.clear();
    g_adjacency_list.resize(g_vertices);

    for (int e = 0; e < g_edges; e++) {
        int from = -1;
        int to = -1;

        for (int v = 0; v < g_vertices; v++) {
            if (g_incidence_matrix[e][v] == -1) {
                from = v;
            } else if (g_incidence_matrix[e][v] == 1) {
                to = v;
            }
        }

        if (from != -1 && to != -1) {
            g_adjacency_list[from].push_back(to);
        }
    }
}

#endif //GRAPHS_CONVERSION_FUNCTIONS_H