#include <memory>
#include <vector>
#include <iostream>
using namespace std;
struct Node { };
struct Tree : enable_shared_from_this<Tree> {
    Tree() { nodes.emplace_back(); }
    ~Tree() { cout << "tree deleted\n"; }

    shared_ptr<Node> getRoot();
    vector<Node> nodes;
};

shared_ptr<Node> Tree::getRoot() {
    return shared_ptr<Node>( shared_from_this(),
            &nodes.front());
}

shared_ptr<Node> getTreeRoot() {
    auto tree = make_shared<Tree>();
    return tree->getRoot();
}

int main() {
    shared_ptr<Node> node = getTreeRoot();
    cout << "we're out of our tree with node "
        << node << endl;
}
