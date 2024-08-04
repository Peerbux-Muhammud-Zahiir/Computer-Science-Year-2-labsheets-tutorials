// public class GradeBookApplication{
//     public static void main(String[] args){
//         GradeBook gradebook1=new GradeBook();
//         GradeBook gradebook2=new GradeBook("Object-Oriented Techniques", 90);
//         System.out.println(gradebook1.toString());
//         System.out.println(gradebook2.toString());
//     }
// }


public class GradeBookApplication{

    public static void main(String[] args){

        GradeBook gradebook=new GradeBook();

        gradebook.setModuleName(0, "Java Programming");
        gradebook.setMark(0, 95);
        gradebook.setModuleName(1, "Database systems");
        gradebook.setMark(1, 88);


        System.out.println(gradebook.toString());
    }
}
// public class GradeBookApplication {
//     public static void main(String[] args) {
//         GradeBook gradeBook = new GradeBook();
        
//         // Update module names and marks
//         gradeBook.setModuleName(0, "Java Programming");
//         gradeBook.setMark(0, 95);
//         gradeBook.setModuleName(1, "Database Systems");
//         gradeBook.setMark(1, 88);
        
//         // Display updated grade book
//         System.out.println(gradeBook.toString());
//     }
// }