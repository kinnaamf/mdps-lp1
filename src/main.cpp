#include <iostream>
#include <vector>
#include "../include/input_functions.h"
#include "../include/conversion_functions.h"
#include "../include/display_functions.h"
#include "../include/menu.h"
#include "../include/save_list.h"

using namespace std;

vector<vector<int> > g_adjacency_matrix;
vector<vector<int> > g_incidence_matrix;
vector<vector<int> > g_adjacency_list;

int g_vertices = 0;
int g_edges = 0;

void menu() {
    size_t option = 0;

    do {
        print_menu();
        cout << "Select option: ";
        cin >> option;
        cout << '\n';

        switch (option) {
            case 1:
                input_adjacency_matrix();
                break;
            case 2:
                input_incidence_matrix();
                break;
            case 3:
                input_adjacency_list();
                break;
            case 4:
                adjacency_matrix_to_list();
                display_adjacency_matrix();
                display_adjacency_list_from_adjM();
                break;
            case 5:
                incidence_matrix_to_list();
                display_incidence_matrix();
                display_adjacency_list_from_incM();
                break;
            case 6:
                list_to_adjacency_matrix();
                display_adjacency_list();
                display_adjacency_matrix();
                break;
            case 7:
                list_to_incidence_matrix();
                display_adjacency_list();
                display_incidence_matrix();
                break;
            case 8:
                display_adjacency_matrix();
                break;
            case 9:
                display_incidence_matrix();
                break;
            case 10:
                display_adjacency_list();
                break;
            case 11:
                save_list();
                break;
            case 0:
                cout << "Exiting...\n";
                return;
            default:
                cout << "Invalid option\n";
                continue;
        }

        char back;
        cout << "\nBack to menu? (y/n): ";
        cin >> back;

        if (back != 'y' && back != 'Y') {
            cout << "Exiting...\n";
            break;
        }
    } while (true);
}


int main() {
    menu();

    return 0;
}
