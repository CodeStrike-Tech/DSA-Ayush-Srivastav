# This code is contributed by kaizen

class Node(object):
    def __init__(self, value):

        self.data = value
        self.next = None


class SLL(object):
    def __init__(self):

        self.head = Node(None)

    def insert_end(self, value):

        curr = self.head
        n = Node(value)
        while True:

            if curr.next == None:
                curr.next = n
                break

    def insert_beg(self, value):

        n = Node(value)
        Node.next = self.head.next
        self.head.next = Node

    def display(self):

        curr = self.head
        while True:

            if curr.next != None:
                print(curr.data)
                curr = curr.next
                continue
            break

if __name__ == "__main__":

    sll = SLL()
    sll.insert_beg(10)
    sll.insert_beg(20)
    sll.insert_beg(30)
    sll.insert_end(50)
    sll.insert_end(60)
    sll.display()