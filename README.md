# Install

Install less globally: `npm install less less-plugin-autoprefix fswatch -g`

Run `npm install`

***Note***
To get merlin working (and prevent atom throwing errors at your because merlin dies), go in the `.merlin` and modify the start of the absolute path after both `FLG -ppx` to be where the project is in your filesystem.

# Building

Normally you'll probably want to run these two commands in two terminals:

    fswatch -o src/less/ | xargs -n1 -I{} lessc src/less/app.less --autoprefix="> 5%" --verbose ./resources/public/css/app.css
    bin/dev.sh

To continously build just the javascript, simply run:

    bin/dev.sh

To build a single time:

    bin/clean.sh
    bin/build.sh

# Editing

Launch Atom: `npm run editor`

For a custom editor, set the `EDITOR` env var: `env EDITOR=/Applications/Emacs.app/Contents/MacOS/Emacs npm run editor`

#ReactJS bindings

Here's what happens to JSX:

```
<ReactMotion.Motion arg1=10> 10 </ReactMotion.Motion>
```

becomes

```
React.createElement ReactMotion.Motion.comp (ReactMotion.Motion.props arg1::10) [| 10 |];
```

So the function `comp` inside the module `Motion` is the component constructor and `props` is a function that will desugar into an inline JS object (thanks to Bucklescript The Transpiler™). That gives us free type checking of props (OCaml will type check that you pass in all the required arguments or the right type, etc.).

`src/index.re` should contain enough examples to get started.
