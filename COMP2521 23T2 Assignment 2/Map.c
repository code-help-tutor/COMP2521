WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
// Implementation of the Map ADT

#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Map.h"

struct map { 
    // TODO
};

/**
 * Creates a new map with the given number of cities
 * Assumes that `numCities` is positive
 */
Map MapNew(int numCities) {
    // TODO
    return NULL;
}

/**
 * Frees all memory allocated to the given map
 */
void MapFree(Map m) {
    // TODO
}

/**
 * Returns the number of cities on the given map
 */
int MapNumCities(Map m) {
    // TODO
    return 0;
}

/**
 * Returns the number of roads on the given map
 */
int MapNumRoads(Map m) {
    // TODO
    return 0;
}

/**
 * Sets the name of the given city
 * If the city's name has already been set, renames it
 */
void MapSetName(Map m, int city, char *name) {
    // TODO
}

/**
 * Returns the name of the given city, or "unnamed" if the city's name
 * has not been set
 */
char *MapGetName(Map m, int city) {
    // TODO
    return "unnamed";
}

/**
 * Inserts a road between two cities with the given length
 * Does nothing if there is already a road between the two cities
 * Assumes that the cities are valid and are not the same
 * Assumes that the length of the road is positive
 */
void MapInsertRoad(Map m, int city1, int city2, int length) {
    // TODO
}

/**
 * Returns the length of the road between two cities, or 0 if no such
 * road exists
 */
int MapContainsRoad(Map m, int city1, int city2) {
    // TODO
    return 0;
}

/**
 * Stores the roads connected to the given city in the given `roads`
 * array in any order and returns the number of roads stored. The `from`
 * field should be equal to `city` for all roads in the array.
 * Assumes that the roads array is at least as large as the number of
 * cities on the map.
 */
int MapGetRoadsFrom(Map m, int city, struct road roads[]) {
    // TODO
    return 0;
}

/**
 * Displays the map
 * !!! DO NOT EDIT THIS FUNCTION !!!
 * This function will work once the other functions are working
 */
void MapShow(Map m) {
    printf("Number of cities: %d\n", MapNumCities(m));
    printf("Number of roads: %d\n", MapNumRoads(m));
    
    struct road *roads = malloc(MapNumRoads(m) * sizeof(struct road));
    if (roads == NULL) {
        fprintf(stderr, "error: out of memory\n");
        exit(EXIT_FAILURE);    
    }
    
    for (int i = 0; i < MapNumCities(m); i++) {
        printf("[%d] %s has roads to:", i, MapGetName(m, i));
        int numRoads = MapGetRoadsFrom(m, i, roads);
        for (int j = 0; j < numRoads; j++) {
            if (j > 0) {
                printf(",");
            }
            printf(" [%d] %s (%d)", roads[j].to, MapGetName(m, roads[j].to),
                   roads[j].length);
        }
        printf("\n");
    }
    
    free(roads);
}

