from _typeshed import Incomplete
from tkinter import Frame, Misc, Scrollbar, Text

__all__ = ["ScrolledText"]

# The methods from Pack, Place, and Grid are dynamically added over the parent's impls
class ScrolledText(Text):
    frame: Frame
    vbar: Scrollbar
    def __init__(self, master: Misc | None = None, **kwargs: Incomplete) -> None: ...
