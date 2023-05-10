int main() {
    doublyList d;
    d.insertPos(1,20);
    d.insertPos(2,30);
    d.insertPos(3,40);
    d.insertPos(4,50);
    d.insertPos(5,60);
    d.insertFront(0);
    d.insertLast(50);
    d.display();
    d.reverseDisplay();
    d.popFirst();
    d.popLast();
    d.popAtPos(40);

}
