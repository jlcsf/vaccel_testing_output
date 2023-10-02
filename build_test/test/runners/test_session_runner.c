/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void test_vaccel_sess_register_null(void);
extern void test_vaccel_sess_init(void);
extern void test_vaccel_sess_init_null(void);
extern void test_vaccel_sess_init_not_init(void);
extern void test_vaccel_sess_update(void);
extern void test_vaccel_sess_update_null(void);
extern void test_vaccel_sess_update_not_init(void);
extern void test_vaccel_free_null(void);
extern void test_vaccel_free_not_init(void);
extern void test_vaccel_free(void);


/*=======Mock Management=====*/
static void CMock_Init(void)
{
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
  GlobalOrderError = NULL;
}
static void CMock_Verify(void)
{
}
static void CMock_Destroy(void)
{
}

/*=======Setup (stub)=====*/
void setUp(void) {}

/*=======Teardown (stub)=====*/
void tearDown(void) {}

/*=======Test Reset Options=====*/
void resetTest(void);
void resetTest(void)
{
  tearDown();
  CMock_Verify();
  CMock_Destroy();
  CMock_Init();
  setUp();
}
void verifyTest(void);
void verifyTest(void)
{
  CMock_Verify();
}

/*=======Test Runner Used To Run Each Test=====*/
static void run_test(UnityTestFunction func, const char* name, UNITY_LINE_TYPE line_num)
{
    Unity.CurrentTestName = name;
    Unity.CurrentTestLineNumber = line_num;
#ifdef UNITY_USE_COMMAND_LINE_ARGS
    if (!UnityTestMatches())
        return;
#endif
    Unity.NumberOfTests++;
    UNITY_CLR_DETAILS();
    UNITY_EXEC_TIME_START();
    CMock_Init();
    if (TEST_PROTECT())
    {
        setUp();
        func();
    }
    if (TEST_PROTECT())
    {
        tearDown();
        CMock_Verify();
    }
    CMock_Destroy();
    UNITY_EXEC_TIME_STOP();
    UnityConcludeTest();
}

/*=======MAIN=====*/
int main(void)
{
  UnityBegin("test_session.c");
  run_test(test_vaccel_sess_register_null, "test_vaccel_sess_register_null", 54);
  run_test(test_vaccel_sess_init, "test_vaccel_sess_init", 60);
  run_test(test_vaccel_sess_init_null, "test_vaccel_sess_init_null", 66);
  run_test(test_vaccel_sess_init_not_init, "test_vaccel_sess_init_not_init", 72);
  run_test(test_vaccel_sess_update, "test_vaccel_sess_update", 80);
  run_test(test_vaccel_sess_update_null, "test_vaccel_sess_update_null", 86);
  run_test(test_vaccel_sess_update_not_init, "test_vaccel_sess_update_not_init", 92);
  run_test(test_vaccel_free_null, "test_vaccel_free_null", 100);
  run_test(test_vaccel_free_not_init, "test_vaccel_free_not_init", 106);
  run_test(test_vaccel_free, "test_vaccel_free", 106);

  return UnityEnd();
}
