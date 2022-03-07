import 'user_template.dart';

class Student extends IUser {
  late final _studentId;
  late final int? _studentScholarShip;
  late final _studentSpeciality;
  static int numOfStudents = 0;

  /*
   * static (keyword) - static variables bir dəfə declare olur və process bitənə
   * qədər yaddaşda saxlanılır və bu variable'dan reference'a(Object) ehtiyac olmadan da 
   * istifadə etmək olur.
   * Məsələn: IUser.numOfStudent
   */

  Student(
      {required age,
      required name,
      city,
      required studentId,
      int? scholarShip,
      required speciality})
      : super(age: age, name: name, city: city) {
    _studentId = studentId;
    _studentScholarShip = scholarShip;
    _studentSpeciality = speciality;
    numOfStudents++;
  }

  get getStudentId => _studentId;
  get getStudentScholarShip => _studentScholarShip ?? 'Unknown';
  get getStudentSpeciality => _studentSpeciality;
  get getNumOfUsers => IUser.numOfUsers;
  get getNumOfStudents => numOfStudents;

  @override
  showInfos() {
    super.showInfos();
    print('StudenId: ${_studentId}');
    print("Student's Speciality: ${_studentSpeciality}");
    print('Student ScholarShip: ${_studentScholarShip ?? "Unknown"}');
  }

  @override // Hər bir class Object class'dan extends olunur(Default olaraq).
  String toString() {
    return 'Student';
  }

  @override
  bool operator ==(Object other) {
    if (identical(this, other)) return true;

    return other is Student &&
        other._studentId == _studentId &&
        other._studentScholarShip == _studentScholarShip &&
        other._studentSpeciality == _studentSpeciality;
  }

  @override
  int get hashCode =>
      _studentId.hashCode ^
      _studentScholarShip.hashCode ^
      _studentSpeciality.hashCode;
}
