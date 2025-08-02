import java.util.Scanner;
import java.util.Vector;

public class q13 {

    public static void get_Sorted(Vector<Integer> vec1, int ln) {

        for (int i = 0; i < ln - 1; i++) {
            for (int j = 0; j < ln - 1 - i; j++) {

                int val1 = j, val2 = j + 1;

                if (val1 > val2) {

                    val1 ^= val2;
                    val2 ^= val1;
                    val1 ^= val2;

                    vec1.set(j, val1);
                    vec1.set(j + 1, val2);
                }
            }
        }
    }

    public static void get_Merged(Vector<Integer> vec1, Vector<Integer> vec2, int ln) {

        for (Integer i : vec2) {
            vec1.addLast(i);
        }
    }

    public static void get_Element(Vector<Integer> vec1, Vector<Integer> vec2, int ln, Scanner sc) {
        System.out.println("Enter The 1st Array Elements: ");

        for (int i = 0; i < ln; i++) {
            int val = sc.nextInt();
            vec1.addLast(val);
        }

        System.out.println("Enter The 2nd Array Elements: ");

        for (int i = 0; i < ln; i++) {
            int val = sc.nextInt();
            vec2.addLast(val);
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter The Array Length: ");
        int ln = sc.nextInt();

        Vector<Integer> vec1 = new Vector<Integer>();
        Vector<Integer> vec2 = new Vector<Integer>();

        get_Element(vec1, vec2, ln, sc);

        get_Merged(vec1, vec2, ln);

        get_Sorted(vec1, ln);

        System.out.println("The Merged and Sorted Array is: ");

        for (Integer i : vec1) {
            System.err.print(i + " ");
        }

        sc.close();
    }
}
