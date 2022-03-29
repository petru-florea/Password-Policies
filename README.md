# Password Policies
### Revision 1.0

---

### Quick summary

This is a password policies library. These password policies are configured by each user, and then each password sent by the user is verified using these password policies. The rulues are:
  + **Length** - this restriction can specify the minimum length or the minimum and maximum length of a password.
  + **Class** - the restriction specifies how many different character classes the password must have; the classes are: lowercase, uppercase, number, and other characters.
  + **Must Include** - password must include at least one character in the specified class.
  + **Must Not Include** - password must NOT include any characters in that class.
  + **Repetition** - this restriction specifies how many times the same character can be repeated consecutively in the password.
  + **Consecutive** - this restriction requires a maximum number of consecutive characters (e.g. **abc** or **123**).
  
  ### Input
  
A positive integer **n**, unknown large, representing the number of rules to be followed. The following **n** lines are the definition of a rule, in the following possible formats:
  + *length <min_length>* - password must be **min_length** characters (inclusive); **0 < min_length**
  + *length <min_length> <max_length>* - password must be between **min_length** and **max_length** characters (inclusive); **0 < min_length <= max_length**
  + *class <min_class_count>* - password must have at least **min_class_count** different types of characters (lowercase, uppercase, number, and other characters); **0 < min_class_count < 5**
  + *include <class>* - password must include at least one character of the specified class; class can be **a, A, 0 or $**, characters denoting the desired class
  + *ninclude <class>* - the password must not include any characters from the specified class; class follows the same rules as above
