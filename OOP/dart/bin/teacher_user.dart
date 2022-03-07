import 'user_template.dart';

class Teacher extends IUser {
  late final _teacherId;
  late final int? _teacherSalary;
  late final _teacherSpeciality;
  static int numOfTeachers = 0;

  Teacher(
      {required age,
      required name,
      city,
      required teacherId,
      required teacherSpeciality,
      int? teacherSalary})
      : super(age: age, name: name, city: city) {
    _teacherId = teacherId;
    _teacherSpeciality = teacherSpeciality;
    _teacherSalary = teacherSalary;
  }

  get getTeacherId => _teacherId;
  get getTeacherSpeciality => _teacherSpeciality;
  get getTeacherSalary => _teacherSalary ?? 'Unknown';

  @override
  showInfos() {
    super.showInfos();
    print('TeacherId: ${_teacherId}');
    print("Teacher's Speciality: ${_teacherSpeciality}");
    print("Teacher's salary: ${_teacherSalary ?? 'Unknown'}");
  }

  @override
  String toString() {
    return 'Teacher';
  }

  @override
  bool operator ==(Object other) {
    if (identical(this, other)) return true;

    return other is Teacher &&
        other._teacherId == _teacherId &&
        other._teacherSalary == _teacherSalary &&
        other._teacherSpeciality == _teacherSpeciality;
  }

  @override
  int get hashCode =>
      _teacherId.hashCode ^
      _teacherSalary.hashCode ^
      _teacherSpeciality.hashCode;
}
