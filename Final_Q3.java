
public class Final_Q3 {
	static final Object nextToken = new Object(); 
	public static void main(String[] args) {
		

	}
	public static void Bool() {
		 System.out.println("Enter <bool_expr>\n");
		 while (nextToken == "true" || nextToken == "false") {
			 lex();
			 term();
		 }
		 System.out.println("Exit <bool_expr>\n");
	}
	public static void Assign() {
		 System.out.println("Enter <assign_stmt>\n");
		 while (nextToken == "=") {
			 lex();
		 }
		 System.out.println("Exit <assign_stmt>\n");
	}
	public static void MathExpr() {
		 System.out.println("Enter <math_expr>\n");
		 if (nextToken instanceof Integer || nextToken instanceof Float)
			 lex();
		 else { 
			 if (nextToken == "=") {
			 lex();
			 expr();
			 if (nextToken instanceof Integer || nextToken instanceof Float)
			 	lex();
			 else
			 	if(nextToken == "+" || nextToken == "-" || nextToken == "*" || nextToken == "/" || nextToken == "%") {
			 		lex();
			 	}
			 }
			 else
			 error();
		 }
		 System.out.println("Exit <math_expr>\n");
	}

}
