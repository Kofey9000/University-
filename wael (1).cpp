/* Wael Ahmed Babiker Elkofey
      Computer Engineering
      Second class
*/
#include <bits/stdc++.h>
using namespace std;

// using std::stack for
// stack implementation
stack<char> st;

// تهيئة سلسلة نصية لتخزين النتائج الخاصة بالمكدس المعكوس
string ns;

// الدالة التالية دالة تعاودية تدرج عنصرًا في أسفل المكدس.

char insert_at_bottom(char x)
{

    if (st.size() == 0)
        st.push(x);

    else
    {
        // تحفظ جميع العناصر في مكدس استدعاء الدالة
        // إلى حين الوصول إلى نهاية المكدس
        // وعندما يصبح المكدس فارغًا
        // تصبح قيمة
        // st.size()
        // مساوية للصفر، وتنفذ العبارة الشرطية أعلاه
        // ويُدرج العنصر في أسفل المكدس

        char a = st.top();
        st.pop();
        insert_at_bottom(x);

        // تدفع جميع العناصر المخزنة في
        // مكدس استدعاء الدالة
        // بعد إدراج العنصر في أسفل المكدس
        st.push(a);
    }
}

// الدالة التالية تعكس عناصر المكدس
// باستخدام الدالة
// insert_at_bottom()
char reverse()
{
    if (st.size() > 0)
    {

        // تحفظ جميع العناصر في مكدس استدعاء الدالة
        // إلى حين الوصول إلى نهاية المكدس

        char x = st.top();
        st.pop();
        reverse();

        // إدراج جميع العناصر المخزنة في
        // مكدس استدعاء الدالة
        // واحدًا تلو الآخر من الأسفل إلى الأعلى
        // ويدرج كل عنصر في أسفل المكدس

        insert_at_bottom(x);
    }
}

// اختبار الدوال السابقة
int main()
{

    // إضافة عناصر إلى المكدس
    st.push('1');
    st.push('2');
    st.push('3');
    st.push('4');

    cout << "Original Stack" << endl;

    // طباعة عناصر المكدس الأصلي
    cout << "1"
         << " "
         << "2"
         << " "
         << "3"
         << " "
         << "4"
         << endl;

    // استدعاء الدالة التي تعكس المكدس
    reverse();
    cout << "Reversed Stack"
         << endl;

    // تخزين قيم المكدس المعكوس
    // في سلسلة نصية لعرضها
    while (!st.empty())
    {
        char p = st.top();
        st.pop();
        ns += p;
    }

    // عرض المكدس المعكوس
    cout << ns[3] << " " << ns[2] << " "
         << ns[1] << " " << ns[0] << endl;
    return 0;
}