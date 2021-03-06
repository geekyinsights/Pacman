
#ifndef DIJKSTRA_H

#define DIJKSTRA_H

#include <iostream>

#include <queue>

#include <list>

class Dijkstra
{
protected:
  int v;

  int infinite;

  std::list<std::pair<int, int>> *adj;

public:
  Dijkstra(void);

  Dijkstra(const int);

  virtual ~Dijkstra(void);

  void setV(const int);

  int getV(void);

  virtual void addEdge(const int, const int, const int);

  int dijkstra(const int, const int) const;
};

#endif