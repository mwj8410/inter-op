#include <assert.h>
#include <string>
#include <napi.h>

#include "./cpp/hello.cpp"

using namespace Napi;

Value Hello(const CallbackInfo& info) {
  assert(info[0].IsString());
  auto input = info[0].As<String>().Utf8Value();
  return String::New(info.Env(), HELLO(input));
}

void Init(Env env, Object exports, Object module) {
  exports.Set("hello", Function::New(env, Hello));
}

NODE_API_MODULE(addon, Init)
