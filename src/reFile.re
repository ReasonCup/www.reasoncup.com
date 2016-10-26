/*
 * vim: set ft=rust:
 * vim: set ft=reason:
 */
/* EXPERIMENT thin wrapper around createClass, not the ML way of life */
type intervalId;

external setInterval : (unit => unit) => int => intervalId = "window.setInterval" [@@bs.val];

external clearInterval : intervalId => unit = "window.clearInterval" [@@bs.val];

let module Console = {
  external log : 'anything => unit = "console.log" [@@bs.val];
};

type props = Js.t < children : Js.null_undefined React.reactElement >;

external props : unit => 'reactJsProps = "" [@@bs.obj];

type state = Js.t < name : string >;

/* WTF is this shit */
let module ReactRe = React;

let nav () =>
  <div className="nav">
    <div className="nav-items content">
      <div className="nav-item"> "ReasonCup 2016" </div>
      <div className="nav-item"> "Rules" </div>
      <div className="nav-item"> "Judges" </div>
      <div className="nav-item"> "Prizes" </div>
      <div className="nav-item"> "Getting Started" </div>
      <div className="nav-item"> "About" </div>
      <div className="nav-item"> "Register" </div>
    </div>
  </div>;

let prolog () =>
  <div className="jumbotron">
    (nav ())
    <section className="content">
      <article>
        <h1> "Reasoners: Join us for ReasonCup!" </h1>
        <p>
          "ReasonCup is a free distributed 48-hour programming event for "
          <a href="https://facebook.github.io/reason/"> "Reasonml" </a>
          " programmers. Teams of up to four build web apps that are useful, fun, or just quirky. Entries will be reviewed by developers in the Reason community with prizes given away at the end!"
        </p>
        <button> "test" </button>
      </article>
    </section>
    <div className="continue"> "v" </div>
  </div>;

let epilog () =>
  <div className="jumbotron">
    <div className="continue"> "v" </div>
    <section className="content">
      <div className="hero-item">
        <h1> "Reason will prevail!" </h1>
        <p> "Let's use Reason to build something great" </p>
        <button> "Join us for ReasonCup 2016" </button>
      </div>
    </section>
    (nav ())
  </div>;

let segment_rules () =>
  <div className="segment">
    <div className="segment_rules">
      <p className="segment_rules"> "Event Rules" </p>
      <p className="segment_rules">
        "ReasonCup is about creating fun and useful projects and pushing the tooling in Reasonml to grow. We're pretty relaxed about what that actually looks as long as you follow some general guidelines:"
      </p>
      <ul>
        <li className="segment_rules">
          "Your apps/entries should be built primarily using Reason (though you may also use the OCaml syntax if you would like). Where it runs doesn't matter though, so we encourage you to use "
          <a href=""> "bucklescript" </a>
          " if you'd like to target the browser or node.js runtimes"
        </li>
        <li className="segment_rules">
          "While the bulk of your code should be in Reason, you can use any non-Reason dependency (C/JS/Unix/etc.) as necessary."
        </li>
        <li className="segment_rules">
          "Entries should run on one of the supported platforms: ARM/Node.js/Browser/Unix/Xen/iOS/rasperry pi/etc.*"
        </li>
      </ul>
      <p>
        "* Your entry may be a web app, a library, some utility, or anything you think would be fun."
        "It's probably best if your entry is somehow usable via the browser, as that's the easiest for judges and the general public to evaluate entries, and avoids complicated setups that may not work when trying to run an entry locally.\n\nIf your entry is not a website however, then be sure to publish it to NPM where we can examine it easily locally."
      </p>
    </div>
  </div>;

let segment_judges () =>
  <div className="segment">
    <div className="segment_judges">
      <p className="segment_judges">
        "We've made sure to bring in some great segment_judges with a deep understanding of the Reason ecosystem and tooling, as well as an understanding of how stuff is actually built and consumed."
      </p>
      <p className="segment_judges"> "Me" </p>
      <p className="segment_judges"> "You" </p>
      <p className="segment_judges"> "Her" </p>
      <p className="segment_judges"> "Him" </p>
      <p className="segment_judges"> "It" </p>
      <p className="segment_judges"> "Us" </p>
      <p className="segment_judges"> "Vous" </p>
      <p className="segment_judges"> "They" </p>
      <br />
      <p className="segment_judges"> "Criteria" </p>
      <ul>
        <li className="segment_judges">
          "Here are some specific judging criteria so you know what to build towards:"
        </li>
        <li className="segment_judges"> "Neat stuff." </li>
      </ul>
    </div>
  </div>;

let segment_prizes () =>
  <div className="segment">
    <div className="segment_prizes">
      <p className="segment_prizes"> "Top fashion item of the season: Reason 2016 hoodie" </p>
      <p className="segment_prizes">
        "Rasperry pi 3 kit - perfect for running highly-optimized Reason code and interacting with hardward!"
      </p>
      <p className="segment_prizes">
        "Rasperry pi zero - It's small, but packs a punch - and year, Reason can run even here!"
      </p>
      <p className="segment_prizes">
        "12 months hosting for your project on major hosting providers"
      </p>
      <br />
      <p className="segment_prizes"> "Sponsors:" </p>
      <p className="segment_prizes"> "Me" </p>
      <p className="segment_prizes"> "You" </p>
    </div>
  </div>;

let segment_about () =>
  <div className="segment">
    <div className="segment_about">
      <p className="segment_about">
        "ReasonCup is brought to you by your fellow reasoners, the "
        <a href="https://github.com/ReasonCup"> "ReasonCup Team" </a>
      </p>
      <p className="segment_about">
        "Rasperry pi 3 kit - perfect for running highly-optimized Reason code and interacting with hardward!"
      </p>
      <p className="segment_about">
        "Rasperry pi zero - It's small, but packs a punch - and year, Reason can run even here!"
      </p>
      <p className="segment_about">
        "12 months hosting for your project on major hosting providers"
      </p>
      <br />
      <p className="segment_about"> "Sponsors:" </p>
      <p className="segment_about"> "Me" </p>
      <p className="segment_about"> "You" </p>
    </div>
  </div>;

let comp = React.createClass (
  {
    val displayName = "ReFile";
    method getInitialState () :state => {"name": "HelloWorld"};
    method render () =>
      <div className="page">
        (prolog ())
        (segment_rules ())
        (segment_judges ())
        (segment_prizes ())
        (epilog ())
      </div>
  }
  [@bs]
);
/* type props = Js.t < name : string, children : Js.null_undefined React.reactElement >;

   /* unused, this file only used by js */
   external props : name::string => unit => 'reactJsProps = "" [@@bs.obj];

   type state = Js.t < count : int, name : float >;

   let module PropTypes = React.PropTypes;

   let foo = Js.Null_undefined.empty;

   /* let module ReactRe = React; */

   let comp = React.createClass (
     {
       val displayName = "ReFile";
       val propTypes = {
         "name": PropTypes.isRequired PropTypes.string,
         "asd": PropTypes.oneOfType [|PropTypes.string|],
         "asd2": PropTypes.oneOf [|"foo"|]
       };
       val mutable id = None;
       method getInitialState () :state => {"count": 0, "name": 1.};
       method componentDidMount () => {
         Console.log "mounted!";
         this##id#=(Some (setInterval (fun () => print_endline "asd") 1000))
       };
       method componentWillUnmount () =>
         switch this##id {
         | None => ()
         | Some id => clearInterval id
         };
       method handleClick _ =>
         React.setState this (fun (state: state) => {"count": state##count + 1});
       method handleClick2 _ => {
         let state: state = React.getState this;
         React.setState this {"count": state##count + 22}
       };
       method render () => {
         let state: state = React.getState this;
         let props: props = React.getProps this;
         <div onMouseDown=this##handleClick>
           <div> state##count </div>
           <JsFile2Re name="clickmetoseemagic"> state##count </JsFile2Re>
           <ReactMotion.Motion
             style={
                     "x": ReactMotion.spring (
                       if (state##count mod 2 == 0) {
                         400
                       } else {
                         0
                       }
                     )
                   }>
             (
               fun style =>
                 <div className="demo0">
                   <div
                     className="demo0-block"
                     style={
                             "WebkitTransform": "translate3d(" ^ string_of_float style##x ^ "px, 0, 0)",
                             "transform": "translate3d(" ^ string_of_float style##x ^ "px, 0, 0)"
                           }
                   />
                 </div>
             )
           </ReactMotion.Motion>
           <ReFile2 inner=1 something=(Js.Null_undefined.return "duckyou")>
             state##name
             state##count
             props##children
           </ReFile2>
           <ReFile2 inner=1 something=(Js.Null_undefined.return "asd")>
             state##name
             state##count
             props##children
           </ReFile2>
           <ReFile2 inner=1> state##name state##count </ReFile2>
           <ReFile2 inner=1 something=foo />
           <div> props##name </div>
           [|<div key=1> (props##name ^ "hello") </div>, <div key=2> props##name </div>|]
         </div>
       }
     }
     [@bs]
   ); */
