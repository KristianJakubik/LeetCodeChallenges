#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <string>
using namespace std;


class BrowserHistory {
private:
  int current;
  int top;
  vector<string>* _browserHistory;
public:
    BrowserHistory(string homepage) {
        _browserHistory = new vector<string>();
        _browserHistory->push_back(homepage);
        current = 0;
        top = 0;
    }
    
    void visit(string url) {
        current++;
        if (current + 1 > _browserHistory->size()) {
          _browserHistory->push_back(url);
        } else {
          _browserHistory->at(current) = url;
        }
        top = current; 
    }
    
    string back(int steps) {
        if (current < steps) {
          steps = current;
        }
        current -= steps;
        return _browserHistory->at(current); 
    }
    
    string forward(int steps) {
        if (current + steps > top) {
          current = top;
        } 
        else {
        current += steps;
        }

        current += steps;
        return _browserHistory->at(current);
    }
};