/*
 * WorldStateInterface.h
 *
 *  Created on: 23 Oct 2015
 *      Author: john
 */

#ifndef TREESEARCH_WORLDSTATEINTERFACE_H_
#define TREESEARCH_WORLDSTATEINTERFACE_H_

#include <list>
#include "AgentStateInterface.h"

namespace treeSearch {

class WorldStateInterface {
public:

	class SnapshotInterface {
	public:
		virtual ~SnapshotInterface() {};
	};

	virtual ~WorldStateInterface() {};
	virtual std::list<AgentStateInterface*> getActiveAgents() = 0;
	virtual SnapshotInterface* takeSnapshot() = 0;
	virtual void restoreShapshot(SnapshotInterface*) = 0;
};

} /* namespace treeSearch */

#endif /* TREESEARCH_WORLDSTATEINTERFACE_H_ */
