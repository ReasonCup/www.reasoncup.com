let module Console = {
  external log : 'anything => unit = "console.log" [@@bs.val];
};
