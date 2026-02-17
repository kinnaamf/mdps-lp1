//
// Created by dimoje on 17.02.2026.
//
#ifndef GRAPHS_INPUT_FUNCTIONS_H
#define GRAPHS_INPUT_FUNCTIONS_H

#include <iostream>
#include <vector>
using namespace std;

extern vector<vector<int> > g_adjacency_matrix;
extern vector<vector<int> > g_incidence_matrix;
extern vector<vector<int> > g_adjacency_list;

extern int g_vertices;
extern int g_edges;

inline void input_adjacency_matrix() {
    cout << "Enter the number of vertices: ";
    cin >> g_vertices;

    g_adjacency_matrix.resize(g_vertices, vector<int>(g_vertices, 0));

    cout << "Enter the adjacency matrix:\n";
    for (int i = 0; i < g_vertices; i++) {
        for (int j = 0; j < g_vertices; j++) {
            cin >> g_adjacency_matrix[i][j];
        }
    }
}

inline void input_incidence_matrix() {
    cout << "Enter the number of vertices: ";
    cin >> g_vertices;

    cout << "Enter the number of edges: ";
    cin >> g_edges;

    g_incidence_matrix.resize(g_vertices, vector<int>(g_edges, 0));

    for (int i = 0; i < g_vertices; i++) {
        for (int j = 0; j < g_edges; j++) {
            cin >> g_incidence_matrix[i][j];
        }
    }
}

inline void input_adjacency_list() {
    cout << "First of all, enter adjacency list:\n\n";

    cout << "Enter the number of vertices: ";
    cin >> g_vertices;

    cout << "Enter the number of edges: ";
    cin >> g_edges;

    g_adjacency_list.clear();
    g_adjacency_list.resize(g_vertices);

    cout << "Enter the adjacency list:\n";
    for (int i = 0; i < g_vertices; i++) {
        cout << "Enter adjacent vertices for vertex " << i << " (enter -1 to end): ";
        int neighbor;

        while (true) {
            cin >> neighbor;
            if (neighbor == -1) break;
            g_adjacency_list[i].push_back(neighbor);
        }
    }
}

#endif //GRAPHS_INPUT_FUNCTIONS_H