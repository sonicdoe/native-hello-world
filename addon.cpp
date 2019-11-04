#define NAPI_VERSION 3
#include <node_api.h>

napi_value Method(napi_env env, napi_callback_info args) {
  napi_status status;
  napi_value string;

  status = napi_create_string_utf8(env, "Hello, world!", NAPI_AUTO_LENGTH, &string);
  if (status != napi_ok) return nullptr;

  return string;
}

napi_value Init(napi_env env, napi_value exports) {
  napi_status status;
  napi_value method;

  status = napi_create_function(env, "exports", NAPI_AUTO_LENGTH, Method, NULL, &method);
  if (status != napi_ok) return nullptr;

  return method;
}

NAPI_MODULE(NODE_GYP_MODULE_NAME, Init)
