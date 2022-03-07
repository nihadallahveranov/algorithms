public class LinkedList<T>{
    /*
     * "template <class T>" T can be declared in any data type
     * https://github.com/nihadallahveranov/algorithms/blob/main/stl.cpp
     */
    private class Node{
        public T? data;
        public Node? next;  
        /*
         * int? - null-able
         * int - non null-able
         */
    }

    private Node? head = null;

    public void pushList(T data){
        if (head == null){
            head = new Node();
            head.data = data;
            head.next = null;
        }
        else{
            Node? iter = head;
            while(iter.next != null)
                iter = iter.next;
            Node? newNode = new Node();
            newNode.data = data;
            newNode.next = null;
            iter.next = newNode;
        }
    }

    public void printList(){
        if (head == null)
            System.Console.WriteLine("This list is empty!");
        else{
            Node? iter = head;
            while(iter != null){
                System.Console.Write(iter.data + " ");
                iter = iter.next;
            }
            System.Console.WriteLine();
        }
    }

    public void popList(){
        if (head == null)
            System.Console.WriteLine("This list is empty!");
        else if (head.next == null)
            head = null;
        else{
            Node? iter = head;
            while(iter.next.next != null)
                iter = iter.next;
            iter.next = null;
        }
    }

    public bool isEmptyList => head == null;

}