/*
 * AgentStateInterface.h
 *
 *  Created on: 23 Oct 2015
 *      Author: john
 */

#ifndef TREESEARCH_AGENTSTATEINTERFACE_H_
#define TREESEARCH_AGENTSTATEINTERFACE_H_

#include <list>

namespace treeSearch {

class AgentStateInterface {
public:
	virtual ~AgentStateInterface() {};

	virtual std::list<ActionInterface*> getPossibleActions();
};

} /* namespace treeSearch */

#endif /* TREESEARCH_AGENTSTATEINTERFACE_H_ */
