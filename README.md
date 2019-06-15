# wasm_factorial

[example from the blog](https://www.syntaxsuccess.com/viewarticle/combining-c-plus-plus-with-javascript)



build with fillowing command.
```
emcc -O3 -s WASM=1 -s EXTRA_EXPORTED_RUNTIME_METHODS='["cwrap"]' -s EXPORTED_FUNCTIONS="['_factorial']" factorial.cpp factorial-service.cpp -o factorial.js
```
add the following line in the generated factorial.js file in the end to make it work
```[cpp]
Module.onRuntimeInitialized = _ => {
  const  factorialCpp = Module.cwrap('factorial', 'number', ['number']);
  factorialCpp(10);
 };
```
