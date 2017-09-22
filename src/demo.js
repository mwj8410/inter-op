/* global process, require */

require('colors');
const addOn = require('../build/Release/addon.node');

const log = (language, message) => {
  if (language === 'Node') {
    process.stdout.write(`${(language).blue}: ${message}\n`);
  } else if (language === 'C++') {
    process.stdout.write(`${(language).cyan}: ${message}\n`);
  }
}

//
log('Node', 'Starting process.');

const result = addOn.hello('test');
log('C++', result);
