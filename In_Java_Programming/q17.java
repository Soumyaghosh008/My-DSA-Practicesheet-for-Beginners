import java.util.Scanner;
import java.util.Vector;

public class q17 {

    public static void get_Printed(Vector<Integer> vec, int ln) {
        System.out.println("The Current Array is: ");

        for (int i = 1; i < ln; i += 2) {
            System.out.print(vec.elementAt(i) + " ");
        }
    }

    public static void get_Element(Vector<Integer> vec, int ln, Scanner sc) {
        System.out.println("Enter The Array Elements: ");

        for (int i = 0; i < ln; i++) {

            int num = sc.nextInt();
            vec.addLast(num);
        }

        get_Printed(vec, ln);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter The Array Length: ");
        int ln = sc.nextInt();

        Vector<Integer> vec = new Vector<Integer>();

        get_Element(vec, ln, sc);

        sc.close();
    }
}
