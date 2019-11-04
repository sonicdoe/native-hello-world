# native-hello-world [![Build status](https://img.shields.io/travis/sonicdoe/native-hello-world.svg)](https://travis-ci.org/sonicdoe/native-hello-world)

> Native “Hello, world!” addon, useful for testing

## Installation

```console
$ npm install native-hello-world --save-dev
```

## Usage

```js
const helloWorld = require('native-hello-world')

helloWorld()
// => 'Hello, world!'
```

## Changelog

This project follows [Semantic Versioning 2](https://semver.org).

- v2.0.0 (2019-11-04):
  - Fix build error with Node.js v12
  - Drop support for Node.js v8 and earlier
- v1.0.0 (2016-12-31): Initial release

## License

native-hello-world is unlicensed. See [`LICENSE`](./LICENSE) for the full (un)licensing statement.
