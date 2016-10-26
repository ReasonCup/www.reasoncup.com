const path = require('path');

module.exports = {
  entry: './src/jsFile1.js',
  output: {
    filename: './_build/all.js',
  },
  module: {
    loaders: [
      {
        include: [
          path.resolve(__dirname, "src"),
        ],
        test: /\.js$/,
        exclude: /node_modules/,
        loader: 'babel-loader',
        query: {
          presets: ['es2015', 'react']
        }
      }
    ]
  }
};
