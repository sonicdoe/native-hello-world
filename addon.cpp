#include <nan.h>

void Method(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  info.GetReturnValue().Set(Nan::New("Hello, world!").ToLocalChecked());
}

void Init(v8::Local<v8::Object> exports, v8::Local<v8::Object> module) {
  module->Set(
    Nan::New("exports").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(Method)->GetFunction()
  );
}

NODE_MODULE(hello_world, Init)
