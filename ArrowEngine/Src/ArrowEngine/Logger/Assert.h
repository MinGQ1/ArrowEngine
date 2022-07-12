#pragma once

#ifdef ASSERTIONS_ON
//TODO: Assertion operation
#	define ARROW__ASSERT_IMPL(test)	
#else
#	define ARROW__ASSERT_IMPL(test) (void*)0
#endif // ASSERTIONS_ON

#define Assert(test) ARROW__ASSERT_IMPL(test)
