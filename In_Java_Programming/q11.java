// !From now we use vector for our java programs.
// !Dont be afraid, Vector and Arrays are formation wise same thing.
// !Vector is dynamically structured and Array is statically.

import java.util.Scanner;
import java.util.Vector;

public class q11 {

    public static void get_Sorted(Vector<Integer> vec, int ln) {

        for (int i = 0; i < ln - 1; i++) {
            for (int j = 0; j < ln - 1 - i; j++) {

                int val1 = vec.elementAt(j);
                int val2 = vec.elementAt(j + 1);

                if (val1 > val2) {

                    val1 ^= val2;
                    val2 ^= val1;
                    val1 ^= val2;

                    vec.set(j, val1);
                    vec.set(j + 1, val2);
                }
            }
        }
    }

    public static void get_Element(Vector<Integer> vec, int ln, Scanner sc) {

        System.out.println("Enter The Array Elements: ");

        for (int i = 0; i < ln; i++) {
            int val = sc.nextInt();
            vec.addLast(val);
        }
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter The Array Length: ");
        int ln = sc.nextInt();

        Vector<Integer> vec = new Vector<Integer>();

        get_Element(vec, ln, sc);

        get_Sorted(vec, ln);

        System.out.println("The sorted Element is: ");

        for (Integer val : vec) {
            System.out.println(val);
        }

        sc.close();
    }
}
