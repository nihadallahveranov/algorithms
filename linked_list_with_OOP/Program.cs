public class Program{
    public static void Main(){
        LinkedList<int> intList = new LinkedList<int>();
        intList.printList();
        intList.pushList(1);    intList.printList();
        intList.pushList(2);    intList.printList();
        intList.popList();      intList.printList();
        intList.popList();      intList.printList();

        LinkedList<String> stringList = new LinkedList<string>();
        stringList.pushList("Nihad");          stringList.printList();
        stringList.pushList("Allahveranov");   stringList.printList();
        System.Console.WriteLine(stringList.isEmptyList); // if list is empty print "true"
    }
}