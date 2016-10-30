/*
 * vim: set ft=rust:
 * vim: set ft=reason:
 */
/* JSX compiles to ReactRe, so alias module name */
let module ReactRe = React;

/* EXPERIMENT thin wrapper around createClass, not the ML way of life */
type intervalId;

external setInterval : (unit => unit) => int => intervalId = "window.setInterval" [@@bs.val];

external clearInterval : intervalId => unit = "window.clearInterval" [@@bs.val];

type props = Js.t < children : Js.null_undefined React.reactElement >;

external props : unit => 'reactJsProps = "" [@@bs.obj];

type state = Js.t < name : string >;

let nav () =>
  <div className="nav">
    <div className="nav-items content">
      <div className="nav-item"> "ReasonCup" </div>
      <div className="nav-item"> "Rules" </div>
      <div className="nav-item"> "Judges" </div>
      <div className="nav-item"> "Prizes" </div>
      <div className="nav-item"> "Sign up" </div>
    </div>
  </div>;

let prolog () =>
  <div className="jumbotron">
    (nav ())
    <section className="content">
      <article>
        <h1> "Come join us for ReasonCup 2016!" </h1>
        <p>
          "ReasonCup is a free distributed 48-hour programming event for "
          <a href="https://facebook.github.io/reason/"> "Reasonml" </a>
          " programmers. Teams of up to four build web apps that are useful, fun, or just quirky. Entries will be reviewed by developers in the Reason community with prizes given away at the end!"
        </p>
        <a href="https://docs.google.com/forms/d/1olHLxw3rkzAMkr6CEbKObTQfLNiTrpIQyLd4l9MBs40">
          <button> "Sign up" </button>
        </a>
      </article>
    </section>
    <div className="continue"> "v" </div>
  </div>;

let epilog () =>
  <div className="jumbotron">
    <div className="continue"> "v" </div>
    <section className="content">
      <article>
        <h1> "Reason will prevail!" </h1>
        <p> "Let's use Reason to build something great" </p>
        <a href="https://docs.google.com/forms/d/1olHLxw3rkzAMkr6CEbKObTQfLNiTrpIQyLd4l9MBs40">
          <button> "Join us for ReasonCup 2016" </button>
        </a>
      </article>
    </section>
    (nav ())
  </div>;

let segment_rules () =>
  <div className="segment">
    <section className="content">
      <article>
        <h1 className="segment-rules"> "Event Rules" </h1>
        <hr />
        <h3> "Have fun" </h3>
        <p className="segment-rules">
          "ReasonCup is about creating fun and useful projects and pushing the tooling in Reasonml to grow. We're pretty relaxed about what that actually looks as long as you follow some general guidelines:"
        </p>
        <hr />
        <h3> "Use Reason" </h3>
        <p className="segment-rules">
          "Your apps/entries should be built primarily using Reason (though you may also use the OCaml syntax if you would like). Where it runs doesn't matter though, so we encourage you to use "
          <a href=""> "Bucklescript" </a>
          " if you'd like to target the browser or node.js runtimes"
        </p>
        <hr />
        <h3> "Dependencies" </h3>
        <p className="segment-rules">
          "While the bulk of your code should be in Reason, you can use any non-Reason dependency (C/JS/Unix/etc.) as necessary."
        </p>
        <hr />
        <h3> "Supported platforms" </h3>
        <p className="segment-rules">
          "Entries should run on one of these platforms: ARM, Node.js, Web, Unix, Xen, iOS, Rasperry Pi. Your entry may also be a library, some utility, or anything you think would be fun."
        </p>
        <hr />
        <h3> "Accessibility" </h3>
        <p>
          "It's probably best if your entry is somehow usable via the browser, as that's the easiest for judges and the general public to evaluate entries, and avoids complicated setups that may not work when trying to run an entry locally.\n\nIf your entry is not a website however, then be sure to publish it to NPM where we can examine it easily locally."
        </p>
      </article>
    </section>
  </div>;

let segment_judges () =>
  <div className="segment">
    <section className="content">
      <article>
        <h1> "Judges" </h1>
        <p className="segment-judges">
          "We've made sure to bring in some great judges with a deep understanding of the Reason ecosystem and tooling, as well as an understanding of how stuff is actually built and consumed. We'll be announcing the full panel of judges shortly."
        </p>
        <hr />
        <img
          className="judge-img"
          src="https://pbs.twimg.com/profile_images/690179176351924224/SBRuzEWj_400x400.jpg"
        />
        <h3> <a href="https://twitter.com/avsm"> "Anil Madhavapeddy" </a> </h3>
        <p className="segment-judges">
          "Engineering at Docker, faculty at Cambridge Computer Lab, fellow Pembroke College, author Real World OCaml, unikernel hacker, and just a generally swell fellow!"
        </p>
        <hr />
        <img
          className="judge-img"
          src="https://pbs.twimg.com/profile_images/557953374419562496/ofvO23ag_400x400.jpeg"
        />
        <h3> <a href="https://twitter.com/kc_srk"> "KC Sivaramakrishnan" </a> </h3>
        <p className="segment-judges">
          "KC is the uniquely capable and thoughtful force behind so many of the most exciting features coming to the Reason language, including Algebraic effects and multicore"
        </p>
        <hr />
        <img className="judge-img" src="/resources/public/img/judges/sgreif.png" />
        <h3> <a href="https://twitter.com/SachaGreif"> "Sache Greif" </a> </h3>
        <p className="segment-judges">
          "Sacha is the auther of DiscoverMeteor and Telescope. He's also a world class visual and product designer, so he's intimately familiar with not only what makes a great product, but also how it's built and explained. "
        </p>
        <hr />
        <img className="judge-img" src="http://placehold.it/128x128" />
        <h3> "To be announced" </h3>
        <p className="segment-judges">
          "We'll be announcing the rest of the judges shortly, so stay tuned!"
        </p>
        <hr />
      </article>
    </section>
  </div>;

let segment_prizes () =>
  <div className="segment">
    <section className="content">
      <article>
        <h1 className="segment-prizes"> "Prizes" </h1>
        <hr />
        <h3 className="segment-prizes"> "Hoody" </h3>
        <p className="segment-prizes">
          "On of the top fashion item of the season. You're gonna look great, believe me."
        </p>
        <hr />
        <h3 className="segment-prizes"> "Reason Mug" </h3>
        <p className="segment-prizes">
          "Start your day with a healthy dose of Reason with this stylish Reason mug"
        </p>
        <hr />
        <h3 className="segment-prizes"> "Rasperry Pi 3" </h3>
        <p className="segment-prizes">
          "It's perfect for running highly-optimized Reason code and interacting with hardware!"
        </p>
        <hr />
        <h3 className="segment-prizes"> "Rasperry Pi Zero" </h3>
        <p className="segment-prizes">
          "It's small but it packs a punch, and Reason can run here too!"
        </p>
        <hr />
        <h3 className="segment-prizes"> "Free hosting" </h3>
        <p className="segment-prizes">
          "12 months hosting for your project on any major hosting provider."
        </p>
      </article>
    </section>
  </div>;

let segment_about () =>
  <div className="segment">
    <div className="segment-about">
      <p className="segment-about">
        "ReasonCup is brought to you by your fellow Reasoners, the "
        <a href="https://github.com/ReasonCup"> "ReasonCup Team" </a>
      </p>
      <p className="segment-about" />
      <p className="segment-about">
        "Rasperry pi 3 kit - perfect for running highly-optimized Reason code and interacting with hardward!"
      </p>
      <p className="segment-about">
        "Rasperry pi zero - It's small, but packs a punch - and year, Reason can run even here!"
      </p>
      <p className="segment-about">
        "12 months hosting for your project on major hosting providers"
      </p>
      <br />
      <p className="segment-about"> "Sponsors:" </p>
      <p className="segment-about"> "Me" </p>
      <p className="segment-about"> "You" </p>
    </div>
  </div>;

let comp = React.createClass (
  {
    val displayName = "ReasonCup";
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
