/*
 * ActionInterface.h
 *
 *  Created on: 23 Oct 2015
 *      Author: john
 */

#ifndef TREESEARCH_ACTIONINTERFACE_H_
#define TREESEARCH_ACTIONINTERFACE_H_

namespace treeSearch {

class ActionInterface {
public:
	virtual ~ActionInterface() {};

	virtual void doAction();
};

} /* namespace treeSearch */

#endif /* TREESEARCH_ACTIONINTERFACE_H_ */
