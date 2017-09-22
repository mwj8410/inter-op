# node-addon-api inter-op #

## Installation ##
**REQUIRES** Node.js 8.5 and above.

```bash
npm install
npm start
```

## Reference ##
[zandaqo/iswasmfast](https://github.com/zandaqo/iswasmfast)

[nodejs/node-addon-api](https://github.com/nodejs/node-addon-api)

[nodejs/node-addon-examples](https://github.com/nodejs/node-addon-examples)

## Findings ##
As of this writing, this project does not exemplify the passing of a meaningful payload between the language environments. However, there is some learning to be had.

First off, the initial intention of this project was to establish a singular pattern with which the same code, withstanding interface functions, could be used across host environments. With the intended host environments being NodeJs, Java, Objective-C, and C# and the hopeful library languages of C++, Java, and Python with obvious omission of languages/vms that don't run in a given host environment.

The `node-addon-api` satisfies this requirement for C++ code hosted in Node, but it does not provide the basis for a standard approach that can be used with other languages.

With this in mind, child-process and TCP interop is still likely the most universal approach.
