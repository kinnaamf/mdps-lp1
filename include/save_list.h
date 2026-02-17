//
// Created by dimoje on 18.02.2026.
//

#ifndef GRAPHS_SAVE_LIST_H
#define GRAPHS_SAVE_LIST_H

#include <fstream>
#include <vector>
#include <cstdlib>
#include "display_functions.h"

using namespace std;

extern vector<vector<int> > g_adjacency_list;
extern int g_vertices;

inline void save_list() {
    if (g_adjacency_list.empty()) {
        input_adjacency_list();
        cout << "First of all, enter adjacency list:\n\n";
    }

    ofstream file("output_list.txt");

    for (int i = 0; i < g_vertices; i++) {
        file << i << " - ";
        for (int j = 0; j < g_adjacency_list[i].size(); j++) {
            file << g_adjacency_list[i][j] << ", ";
        }
        file << "-1\n";
    }

    file.close();

    display_adjacency_list();

#ifdef _WIN32
    system("notepad output_list.txt");
#else
    system("xdg-open output_list.txt");
#endif

    cout << "\n\nSaved list saved successfully in output_list.txt!\n";
}

#endif //GRAPHS_SAVE_LIST_H
