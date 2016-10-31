let module ReactRe = React;

let main () =>
  ReactDOM.render (React.createElement Index.comp [] [||]) (Document.querySelector ".container");

main ();
