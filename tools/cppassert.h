#ifndef CPPASSERT_H_8PJEZ5TO
#define CPPASSERT_H_8PJEZ5TO

#include <assert.h>

#ifndef NDEBUG
/// @简介    断言的封装，通过类似以下方式使用，可以增强断言显示的错误信息
///              MESSAGE_ASSERT ( "Size can not be zero!", ( 0 != m_size ) );
#define MESSAGE_ASSERT(m, e) assert ( ( m && e ) )

/// @简介    静态断言, 通过类似以下方法使用：
///              STATIC_ASSERT ( int_cannot_be_longer_than_long, sizeof(int) < sizeof (long) );
#define STATIC_ASSERT(desc, e) \
    struct X { unsigned int desc : e; }

#else

#define MESSAGE_ASSERT(m, e)

#define STATIC_ASSERT(desc, e)

#endif // END NDEBUG

#endif /* end of include guard: CPPASSERT_H_8PJEZ5TO */

