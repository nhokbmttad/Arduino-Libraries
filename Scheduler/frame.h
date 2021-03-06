#ifndef __FRAME_h__
#define __FRAME_h__

#ifndef NULL
#include <cstddef>
#endif  // NULL

// linked list frame
class frame
{
   public:
      int functions[100]; //array of functions to call 
      frame* nextFrame;    // next node in the list

      // default constructor with no initial value
      node() : next(NULL)
      {}
      //test comment for git to recognize
      
      // constructor. initialize nodeValue and next
      node(const T& item, node<T> *nextNode = NULL) : 
			  nodeValue(item), next(nextNode)
      {}
};

#endif   // NODE_CLASS
