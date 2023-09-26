#include <vector>
#include <algorithm>
#include <iostream>

// Forward declaration for the Mediator class
class Participant;

// Mediator class
class Mediator {
private:
    std::vector<Participant*> participants{};
    
public:
    void join(Participant* p);
    
    void broadcast(const Participant* source, const int value);
};

// Participant class
class Participant {
private:
    Mediator& mediator;

public:
    int value{0};
    
    Participant(Mediator &mediator) : mediator(mediator) {
        mediator.join(this);
        //mediator.participants.push_back(this);
    }

    void say(int value) {
        mediator.broadcast(this, value);
    }
    
    void increment(int v) {
        value += v;
    }
};

// Implement Mediator functions after the Participant implementation
// "inline" needed for the Udemy website - multiple declarations of functions
inline void Mediator::join(Participant* p) {
    participants.push_back(p);
}

inline void Mediator::broadcast(const Participant* source, const int value) {
    for( Participant* p : participants) {
        if (p != source)
            p->increment(value);
    }
}

// Main
int main() {
    Mediator m;
    Participant p1{m}, p2{m};

    p1.say(2);
    p2.say(4);
	
	std::cout << p1.value << " = 4\n";
	std::cout << p2.value << " = 2\n";
	std::flush();
}



