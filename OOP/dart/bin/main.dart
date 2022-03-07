import 'student_user.dart';
import 'teacher_user.dart';

enum fields {
  age,
  name,
  city,
  studentId,
  studentSpeciality,
  scholarShip,
  numOfUsers,
  numOfStudents,
}
void main(List<String> arguments) {
  final students = [];

  final student1 = Student(
      age: 18,
      name: 'Nihad',
      studentId: 8,
      speciality: 'Computer Engineering',
      city: 'Baku');

  students.add(student1);
  print('-----' * 10);
  print('${fields.numOfUsers.name}: ${student1.getNumOfUsers}');
  print('${fields.numOfStudents.name}: ${student1.getNumOfStudents}');

  final student2 = Student(
      age: 18,
      name: 'Matlab Hasanli',
      studentId: '7',
      speciality: 'Computer Engineering',
      city: 'Baku');

  print('-----' * 10);
  student2.showInfos();

  final teacher1 = Teacher(
      age: 21,
      name: 'Pari',
      teacherId: 11,
      teacherSpeciality: 'Computer Engineering',
      city: 'Baku');

  print('-----' * 10);
  teacher1.showInfos();

  print(student1 + student2);

  student1.sayHello();
}
