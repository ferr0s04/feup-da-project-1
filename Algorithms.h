#ifndef WATER_SUPPLY_ANALYSIS_SYSTEM_ALGORITHMS_H
#define WATER_SUPPLY_ANALYSIS_SYSTEM_ALGORITHMS_H


#include "Graph.h"

/**
 * @brief Tests the given vertex 'w' and visits it if conditions are met.
 * @details Time complexity: O(1).
 * @param q The queue used for Breadth-First Search.
 * @param e The edge connecting the current vertex to 'w'.
 * @param w The vertex to be tested and visited.
 * @param residual The residual capacity of the edge.
 */
void testAndVisit(std::queue< Vertex*> &q, Edge *e, Vertex *w, double residual);

/**
 * @brief Finds an augmenting path using Breadth-First Search.
 * @details Time complexity: O(V + E).
 * @param g Pointer to the graph.
 * @param s Pointer to the source vertex.
 * @param t Pointer to the target vertex.
 * @return true if an augmenting path to the target is found, false otherwise.
 */
bool findAugmentingPath(Graph *g, Vertex *s, Vertex *t);

/**
 * @brief Finds the minimum residual capacity along the augmenting path.
 * @details Time complexity: O(V).
 * @param s Pointer to the source vertex.
 * @param t Pointer to the target vertex.
 * @return The minimum residual capacity along the augmenting path.
 */
double findMinResidualAlongPath(Vertex *s, Vertex *t);

/**
 * @brief Augments flow along the augmenting path with the given flow value
 * @details Time complexity: O(V).
 * @param s Pointer to the source vertex.
 * @param t Pointer to the target vertex.
 * @param f The amount by which to augment the flow.
 */
void augmentFlowAlongPath(Vertex *s, Vertex *t, double f);

/**
 * @brief Implements the Edmonds-Karp algorithm for maximum flow.
 * @details Time complexity: O(V E^2).
 * @param g Pointer to the graph.
 * @throws logic_error if source or target vertices are invalid.
 */
void edmondsKarp(Graph *g);


/**
 * @brief Tests the given vertex 'w' and visits it if conditions are met, now with a deactivated vertex.
 * @param q The queue used for Breadth-First Search.
 * @param e The edge connecting the current vertex to 'w'.
 * @param w The vertex to be tested and visited.
 * @param residual The residual capacity of the edge.
 * @param deactivatedVertex The vertex that should be excluded from consideration.
 */
void testAndVisitWithDeactivatedVertex(std::queue< Vertex*> &q, Edge *e, Vertex *w, double residual, Vertex *deactivatedVertex);

/**
 * @brief Finds an augmenting path using Breadth-First Search, now with a deactivated vertex.
 * @details Time complexity: O(V + E).
 * @param g Pointer to the graph.
 * @param s Pointer to the source vertex.
 * @param t Pointer to the target vertex.
 * @param deactivatedVertex The vertex that should be excluded from consideration.
 * @return true if an augmenting path to the target is found, false otherwise.
 */
bool findAugmentingPathWithDeactivatedVertex(Graph *g, Vertex *s, Vertex *t, Vertex *deactivatedVertex);

/**
 * @brief Implements the Edmonds-Karp algorithm for maximum flow, now with a deactivated vertex.
 * @details Time complexity: O(V E^2).
 * @param g Pointer to the graph.
 * @param deactivated The vertex that should be excluded from consideration.
 */
void edmondsKarpWithDeactivatedVertex(Graph *g, const string deactivated);


/**
 * @brief Tests the given vertex 'w' and visits it if conditions are met, now with a deactivated edge.
 * @param q The queue used for Breadth-First Search.
 * @param e The edge connecting the current vertex to 'w'.
 * @param w The vertex to be tested and visited.
 * @param residual The residual capacity of the edge.
 * @param servicePointA The code of the first service point of the deactivated edge.
 * @param servicePointB The code of the second service point of the deactivated edge.
 * @param unidirectional Flag indicating if the edge is unidirectional.
 */
void testAndVisitWithDeactivatedEdge(std::queue< Vertex*> &q, Edge *e, Vertex *w, double residual, const string servicePointA, const string servicePointB, bool unidirectional);

/**
 * @brief Finds an augmenting path using Breadth-First Search, now with a deactivated edge.
 * @details Time complexity: O(V + E).
 * @param g Pointer to the graph.
 * @param s Pointer to the source vertex.
 * @param t Pointer to the target vertex.
 * @param servicePointA The code of the first service point of the deactivated edge.
 * @param servicePointB The code of the second service point of the deactivated edge.
 * @param unidirectional Flag indicating if the edge is unidirectional.
 * @return true if an augmenting path to the target is found, false otherwise.
 */
bool findAugmentingPathWithDeactivatedEdge(Graph *g, Vertex *s, Vertex *t, const string servicePointA, const string servicePointB, bool unidirectional);

/**
 * @brief Implements the Edmonds-Karp algorithm for maximum flow, now with a deactivated edge.
 * @details Time complexity: O(V E^2).
 * @param g Pointer to the graph.
 * @param servicePointA The code of the first service point of the deactivated edge.
 * @param servicePointB The code of the second service point of the deactivated edge.
 * @param unidirectional Flag indicating if the edge is unidirectional.
 */
void edmondsKarpWithDeactivatedEdge(Graph *g, const string servicePointA, const string servicePointB, bool unidirectional);

#endif //WATER_SUPPLY_ANALYSIS_SYSTEM_ALGORITHMS_H
