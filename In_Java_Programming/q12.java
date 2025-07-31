import java.util.Scanner;
import java.util.Vector;

public class q12 {

    public static void get_Sorted_Desending(Vector<Integer> vec, int ln) {

        for (int i = 0; i < ln - 1; i++) {
            for (int j = 0; j < ln - 1 - i; j++) {

                int val1 = vec.elementAt(j);
                int val2 = vec.elementAt(j + 1);

                if (val1 < val2) {

                    val1 ^= val2;
                    val2 ^= val1;
                    val1 ^= val2;

                    vec.set(j, val1);
                    vec.set(j + 1, val2);
                }
            }
        }

        System.out.println("The Sorted Array in Desending Order is:");

        for (Integer i : vec) {
            System.out.print(i + " ");
        }
    }

    public static void get_Sorted_Ascending(Vector<Integer> vec, int ln) {

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

        System.out.println("The Sorted Array in Ascending Order is:");

        for (Integer i : vec) {
            System.out.print(i + " ");
        }

        System.out.println("\n");
    }

    public static void get_Element(Vector<Integer> vec, int ln, Scanner sc) {

        System.out.println("Enter The Array Elements:");

        for (int i = 0; i < ln; i++) {
            int val = sc.nextInt();
            vec.addLast(val);
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter Array Length: ");
        int ln = sc.nextInt();

        Vector<Integer> vec = new Vector<Integer>();

        get_Element(vec, ln, sc);

        get_Sorted_Ascending(vec, ln);
        get_Sorted_Desending(vec, ln);

        sc.close();
    }
}