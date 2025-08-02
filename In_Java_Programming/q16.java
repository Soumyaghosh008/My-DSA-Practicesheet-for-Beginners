import java.util.Scanner;
import java.util.Vector;

public class q16 {

    public static void get_Zeros(Vector<Integer> vec) {
        for (Integer i : vec) {

            if (i < 0) {
                vec.set(i, 0);
            }
        }
    }

    public static void get_Element(Vector<Integer> vec, int ln, Scanner sc) {
        System.out.println("Enter The Array Elements:");

        for (int i = 0; i < ln; i++) {
            int num = sc.nextInt();
            vec.addLast(num);
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter Array Length: ");
        int ln = sc.nextInt();

        Vector<Integer> vec = new Vector<Integer>();

        get_Element(vec, ln, sc);

        get_Zeros(vec);

        System.out.println("The New Array Is: ");

        for (Integer i : vec) {
            System.out.print(i + " ");
        }

        sc.close();
    }
}
