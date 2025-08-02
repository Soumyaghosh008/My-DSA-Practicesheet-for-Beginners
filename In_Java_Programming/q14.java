import java.util.Scanner;
import java.util.Vector;

public class q14 {

    public static void get_Count(Vector<Integer> vec, int ln, int zero, int pos, int neg) {

        for (Integer i : vec) {

            if (i < 0) {
                neg++;
            } else if (i > 0) {
                pos++;
            } else {
                zero++;
            }
        }

        System.out.println("The Count of Positive Integers are: " + pos);
        System.out.println("The Count of Negetive Integers are: " + neg);
        System.out.println("The Count of Zero Integers are: " + zero);
    }

    public static void get_Element(Vector<Integer> vec, int ln, Scanner sc) {
        System.out.println("Enter The array Elements: ");

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

        int zero = 0, pos = 0, neg = 0;

        get_Count(vec, ln, zero, pos, neg);

        sc.close();
    }
}
