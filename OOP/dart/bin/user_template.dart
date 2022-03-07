import 'student_user.dart';
import 'teacher_user.dart';

abstract class IUser with say {
  late final _age;
  late final _name;
  late final String? _city;

  /*
   * underScore(_) private access modifier olduğunu təyin edir.
   * Dart'da private'a sahib olan üzvlər sadəcə başqa fayllara private'dır.
   * final - const olduğunu, yəni ya declare olduğunda ya da Constructor'da initialize olmalıdır.
   * Constructor'da initialize etməyəcəksinizsə, late keyword'i ilə sonra initialize edə bilərsiniz.
   * Amma mütləq initialize olunmalıdır!!!
   * Dart'da default value null olduğunu nəzərə alın.
   * int?, String? və.s - null-able olduğunu bildirir.
   */

  static int numOfUsers = 0;
  IUser({required age, required name, String? city}) {
    // Optional Parameters
    _age = age;
    _name = name;
    _city = city;
    numOfUsers++;
  }

  get getAge => _age;
  get getName => _name;
  get getCity => _city ?? 'Unknown';

  showInfos() {
    print('Age: $_age');
    print('Name: $_name');
    print('City: ${_city ?? "Unknown"}');
  }

  String operator +(Object object) {
    return object is Student ? _name + ' ' + object.getName : '';
  }

  @override
  void sayHello() {
    super.sayHello();
  }
}

mixin say {
  void sayHello() {
    print('hellloooo');
  }
}
