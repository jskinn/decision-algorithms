/*
 * Search.cpp
 *
 *  Created on: 23 Oct 2015
 *      Author: john
 */

#include "Search.h"
#include <queue>

namespace treeSearch {

/**
 * Recursively search the decision tree over the acting agents.
 *
 * TODO: I want a custom priority queue here, which can be quickly reset and copied
 */
float doSearch(
		WorldStateInterface* progressiveWorldState,
		std::priority_queue<AgentStateInterface*> agentQueue,
		int depth) {

	if (depth <= 0) {
		// TODO: evaluate the state
		return 0;
	}

	WorldStateInterface::SnapshotInterface* snapshot = progressiveWorldState->takeSnapshot();

	AgentStateInterface* actingAgent = agentQueue.top();
	agentQueue.pop();
	std::list<ActionInterface*> actions = actingAgent->getPossibleActions();
	float best = 0, score = 0;

	for (std::list<ActionInterface*>::iterator iter = actions.begin(); iter != actions.end(); ++iter) {
		(*iter)->doAction();
		score = doSearch(progressiveWorldState, agentQueue, depth - 1);
		progressiveWorldState->restoreShapshot(snapshot);

		if (score > best) {
			best = score;
		}
	}

	return best;
}

void searchDecisionTree(WorldStateInterface* worldState) {

}

} /* namespace treeSearch */
