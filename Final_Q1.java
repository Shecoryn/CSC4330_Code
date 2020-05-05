
public class Final_Q1 {

	public static void main(String[] args) {
		Object a = 1;
		isOfType(a);
	}
	public static void isOfType(Object x) {
		if(x == null)
			System.out.println("This is a null variable.");
			if(x instanceof Float) {
				System.out.println("This value is a floating point number.");
			} else if(x instanceof Integer) {
				System.out.println("This value is an integer.");
			} else {
				System.out.println("This value is a string of characters.");
			}
	}

}
