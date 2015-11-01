You should always use enums when a variable (especially a method parameter) can only take one out of a small set of possible values. Examples would be things like type constants (contract status: "permanent", "temp", "apprentice"), or flags ("execute now", "defer execution").

If you use enums instead of integers (or String codes), you increase compile-time checking and avoid errors from passing in invalid constants, and you document which values are legal to use.

BTW, overuse of enums might mean that your methods do too much (it's often better to have several separate methods, rather than one method that takes several flags which modify what it does), but if you have to use flags or type codes, enums are the way to go.

As an example, which is better?

/** Counts number of foobangs.
 * @param type Type of foobangs to count. Can be 1=green foobangs,
 * 2=wrinkled foobangs, 3=sweet foobangs, 0=all types.
 * @return number of foobangs of type
 */
public int countFoobangs(int type)
versus

/** Types of foobangs. */
public enum FB_TYPE {
 GREEN, WRINKLED, SWEET, 
 /** special type for all types combined */
 ALL;
}

/** Counts number of foobangs.
 * @param type Type of foobangs to count
 * @return number of foobangs of type
 */
public int countFoobangs(FB_TYPE type)
A method call like:

int sweetFoobangCount = countFoobangs(3);
then becomes:

int sweetFoobangCount = countFoobangs(FB_TYPE.SWEET);
In the second example, it's immediately clear which types are allowed, docs and implementation cannot go out of sync, and the compiler can enforce this. Also, an invalid call like

int sweetFoobangCount = countFoobangs(99);
is no longer possible.