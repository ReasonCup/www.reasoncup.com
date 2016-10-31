const path = require('path');

module.exports = {
  entry: './src/main.js',
  output: {
    filename: './resources/public/js/all.js',
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
