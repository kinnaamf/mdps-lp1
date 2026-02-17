//
// Created by dimoje on 17.02.2026.
//

#ifndef GRAPHS_DISPLAY_FUNCTIONS_H
#define GRAPHS_DISPLAY_FUNCTIONS_H

#include <iostream>
#include <vector>
using namespace std;

extern vector<vector<int> > g_adjacency_matrix;
extern vector<vector<int> > g_incidence_matrix;
extern vector<vector<int> > g_adjacency_list;

extern int g_vertices;
extern int g_edges;

inline void display_adjacency_list_from_adjM() {
    cout << "\nAdjacency List:\n";
    for (int i = 0; i < g_vertices; i++) {
        cout << i << " - ";
        for (int j = 0; j < g_adjacency_list[i].size(); j++) {
            cout << g_adjacency_list[i][j] - 1 << ", ";
        }
        cout << "-1\n";
    }
}

inline void display_adjacency_list_from_incM() {
    cout << "\nAdjacency List:\n";
    for (int i = 0; i < g_vertices; i++) {
        cout << i << " - ";
        for (int j = 0; j < g_adjacency_list[i].size(); j++) {
            cout << g_adjacency_list[i][j] << ", ";
        }
        cout << "-1\n";
    }
}

inline void display_incidence_matrix() {
    list_to_incidence_matrix();

    cout << "\nIncidence Matrix:\n";
    cout << "\t";
    for (int i = 0; i < g_vertices; i++) {
        cout << "x" << i << "\t";
    }

    cout << "\n";
    for (int i = 0; i < g_edges; i++) {
        cout << "u" << i << "\t";
        for (int j = 0; j < g_vertices; j++) {
            cout << g_incidence_matrix[j][i] << "\t";
        }
        cout << "\n";
    }
}

inline void display_adjacency_matrix() {
    cout << "\nAdjacency Matrix:\n";

    list_to_adjacency_matrix();

    cout << "\n";

    for (int i = 0; i < g_vertices; i++) {
        cout << "\tx" << i;
    }

    cout << "\n";

    for (int i = 0; i < g_vertices; i++) {
        cout << "x" << i;

        for (int j = 0; j < g_vertices; j++) {
            cout << "\t" << g_adjacency_matrix[i][j] << " ";
        }
        cout << "\n";
    }
}

inline void display_adjacency_list() {
    cout << "\nAdjacency List:\n";

    for (int i = 0; i < g_vertices; i++) {
        cout << i << " - ";
        for (int j = 0; j < g_adjacency_list[i].size(); j++) {
            cout << g_adjacency_list[i][j] << ", ";

        }
        cout << "-1\n";
    }

}

#endif //GRAPHS_DISPLAY_FUNCTIONS_H