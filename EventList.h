#ifndef EventList_h
#define EventList_h
#include "Event.h"

class EventList {
  public:
    EventList();
    ~EventList();
    void push (const Event e);
    Event pop();
    boolean isEmpty();
    int count();
    void setPrinter (Print &p);

  private:
    typedef struct node {
      Event element;
      node * next;
    } node;

    typedef node *link;
    Print * printer;
    int events;
    link head;
    link tail;
};


EventList::EventList()
{
  events = 0;
  head = NULL;
  tail = NULL;
  printer = NULL;
}

EventList::~EventList()
{
  for (link t = head; t != NULL; head = t) {
    t = head->next; delete head;
  }
  events = 0;
  tail = NULL;
  printer = NULL;
}

void EventList::push (Event e) {

}

Event EventList::pop() {
  Event item;
  return item;
}

boolean EventList::isEmpty() {
  return true;
}

int EventList::count() {
  return 0;
}

void EventList::setPrinter (Print &p) {
  printer = &p;
}






#endif



